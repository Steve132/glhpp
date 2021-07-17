
from pprint import pprint
import xml.etree.ElementTree as ET
tree = ET.parse('gl.xml')
root = tree.getroot()


def genapi(apilist):
    currapi_cmd=set()
    currapi_enum=set()
    versions={}
    for a in apilist:
        currapi_cmd |= frozenset([r.attrib["name"] for r in a.findall("./require/command")])
        currapi_cmd -= frozenset([r.attrib["name"] for r in a.findall("./remove/command")])
        currapi_enum |= frozenset([r.attrib["name"] for r in a.findall("./require/enum")])
        currapi_enum -= frozenset([r.attrib["name"] for r in a.findall("./remove/enum")])
        versions[a.attrib["name"]]={"commands":frozenset(currapi_cmd),"enums":frozenset(currapi_enum)}
    return versions

def rotateapi(versions):
    commands={}
    
    for v,p in versions.items():
        for c in p["commands"]:
            commands.setdefault(c,[])
            commands[c].append(v)
    return commands
    
# 'year' nodes that are children of nodes with name='Singapore'
allfeatures=root.findall(".//feature")

apis={}

for f in allfeatures:
    api=f.attrib['api']
    apis.setdefault(api,[])
    apis[api].append(f)


allversions={}
for n,v in apis.items():
    v.sort(key=lambda f: float(f.attrib['number']))
    a=genapi(v)
    allversions.update(a)
    
commands=rotateapi(allversions)
pprint(commands)
pprint(allversions.keys())

    
    
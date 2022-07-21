import os
import binascii
with open('frenchrom.gba', 'rb') as f:
    original = binascii.hexlify(f.read()).decode()

with open('pokeemerald.gba', 'rb') as f:
    decomp = binascii.hexlify(f.read()).decode()

totalbytes = 0
matchbytes = 0

for i in range(int(len(original)/2)):
    totalbytes += 1
    if original[i * 2 : i * 2 + 2 ] == decomp[i * 2 : i * 2 + 2 ]:
        matchbytes +=1
print('La rom correspond à ' + str(100*(matchbytes/totalbytes)) +' % . ' + str(totalbytes - matchbytes) + 'bytes ne correspondent pas')
print('The rom matches at ' + str(100*(matchbytes/totalbytes)) +' % . ' + str(totalbytes - matchbytes) + 'bytes do not match')

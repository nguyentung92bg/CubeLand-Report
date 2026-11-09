/* IL2CPP: Rotatelab.Scripts.RoundedBoxMeshGenerator$$.cctor
void Rotatelab_Scripts_RoundedBoxMeshGenerator___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedBoxMeshGenerator$$.cctor
   void Rotatelab_Scripts_RoundedBoxMeshGenerator___cctor (const MethodInfo* method); */

void Rotatelab_Scripts_RoundedBoxMeshGenerator___cctor_101d000(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_0102d094 + 0x102d010);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102d098 + 0x102d024));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102d09c + 0x102d030));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102d0a0 + 0x102d03c));
    *pcVar6 = '\x01';
  }
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0102d0a4 + 0x102d050));
  System_Collections_Generic_Dictionary_RoundedBoxMeshGenerator_CacheKey__object____ctor_20c6e30
            (uVar3,**(undefined4 **)(_UNK_0102d0a8 + 0x102d064));
  piVar4 = *(int **)(_UNK_0102d0ac + 0x102d078);
  **(undefined4 **)(*piVar4 + 0x5c) = uVar3;
  uVar5 = *(uint *)(*piVar4 + 0x5c);
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + (uVar5 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((uVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}


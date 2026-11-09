/* IL2CPP: Rotatelab.Networking.HiroController$$.cctor
void Rotatelab_Networking_HiroController___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$.cctor
   void Rotatelab_Networking_HiroController___cctor (const MethodInfo* method); */

void Rotatelab_Networking_HiroController___cctor_114d2b4(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_0115d350 + 0x115d2c4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115d354 + 0x115d2d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115d358 + 0x115d2e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115d35c + 0x115d2f0));
    *pcVar6 = '\x01';
  }
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115d360 + 0x115d304));
  Rotatelab_Save_SavedString___ctor_1083154(uVar3,**(undefined4 **)(_UNK_0115d364 + 0x115d320),0,0);
  piVar4 = *(int **)(_UNK_0115d368 + 0x115d334);
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


/* IL2CPP: Rotatelab.UI.InGameCore$$Awake
void Rotatelab_UI_InGameCore__Awake (Rotatelab_UI_InGameCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.InGameCore$$Awake
   void Rotatelab_UI_InGameCore__Awake (Rotatelab_UI_InGameCore_o* __this, const MethodInfo*
   method); */

void Rotatelab_UI_InGameCore__Awake_112c7c4(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_0113c88c + 0x113c7d8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113c890 + 0x113c7ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113c894 + 0x113c7f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113c898 + 0x113c804));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_0113c89c + 0x113c818);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x74);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0113c8a0 + 0x113c83c));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0113c8a4 + 0x113c85c),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar7,uVar4,0);
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x74);
  *puVar5 = uVar4;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar5 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}


/* IL2CPP: Rotatelab.SeasonPassTutorialController$$OnEnable
void Rotatelab_SeasonPassTutorialController__OnEnable (Rotatelab_SeasonPassTutorialController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPassTutorialController$$OnEnable
   void Rotatelab_SeasonPassTutorialController__OnEnable (Rotatelab_SeasonPassTutorialController_o*
   __this, const MethodInfo* method); */

void Rotatelab_SeasonPassTutorialController__OnEnable_fc5838(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_00fd58fc + 0xfd584c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5900 + 0xfd5860));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5904 + 0xfd586c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5908 + 0xfd5878));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_00fd590c + 0xfd588c);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x180);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd5910 + 0xfd58b0));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_00fd5914 + 0xfd58d0),0);
  Rotatelab_GameAction__op_Addition_fbfed8(uVar7,uVar4);
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x180);
  *puVar5 = uVar7;
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


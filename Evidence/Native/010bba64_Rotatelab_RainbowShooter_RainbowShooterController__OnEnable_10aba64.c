/* IL2CPP: Rotatelab.RainbowShooter.RainbowShooterController$$OnEnable
void Rotatelab_RainbowShooter_RainbowShooterController__OnEnable (Rotatelab_RainbowShooter_RainbowShooterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RainbowShooter.RainbowShooterController$$OnEnable
   void Rotatelab_RainbowShooter_RainbowShooterController__OnEnable
   (Rotatelab_RainbowShooter_RainbowShooterController_o* __this, const MethodInfo* method); */

void Rotatelab_RainbowShooter_RainbowShooterController__OnEnable_10aba64(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_010bbbb8 + 0x10bba78);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bbbbc + 0x10bba8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bbbc0 + 0x10bba98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bbbc4 + 0x10bbaa4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bbbc8 + 0x10bbab0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bbbcc + 0x10bbabc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bbbd0 + 0x10bbac8));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_010bbbd4 + 0x10bbadc);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x120);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010bbbd8 + 0x10bbb00));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar4,param_1,**(undefined4 **)(_UNK_010bbbdc + 0x10bbb20),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c
                    (uVar7,uVar4,**(undefined4 **)(_UNK_010bbbe0 + 0x10bbb38));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x120) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x7c);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010bbbe4 + 0x10bbb68));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010bbbe8 + 0x10bbb88),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar7,uVar4,0);
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x7c);
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


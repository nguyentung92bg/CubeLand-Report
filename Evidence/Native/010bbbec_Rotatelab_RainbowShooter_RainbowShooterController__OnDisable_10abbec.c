/* IL2CPP: Rotatelab.RainbowShooter.RainbowShooterController$$OnDisable
void Rotatelab_RainbowShooter_RainbowShooterController__OnDisable (Rotatelab_RainbowShooter_RainbowShooterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RainbowShooter.RainbowShooterController$$OnDisable
   void Rotatelab_RainbowShooter_RainbowShooterController__OnDisable
   (Rotatelab_RainbowShooter_RainbowShooterController_o* __this, const MethodInfo* method); */

void Rotatelab_RainbowShooter_RainbowShooterController__OnDisable_10abbec(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_010bbd40 + 0x10bbc00);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bbd44 + 0x10bbc14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bbd48 + 0x10bbc20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bbd4c + 0x10bbc2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bbd50 + 0x10bbc38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bbd54 + 0x10bbc44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bbd58 + 0x10bbc50));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_010bbd5c + 0x10bbc64);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x120);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010bbd60 + 0x10bbc88));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar4,param_1,**(undefined4 **)(_UNK_010bbd64 + 0x10bbca8),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Subtraction_23a44a8
                    (uVar7,uVar4,**(undefined4 **)(_UNK_010bbd68 + 0x10bbcc0));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x120) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x7c);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010bbd6c + 0x10bbcf0));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010bbd70 + 0x10bbd10),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar7,uVar4,0);
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


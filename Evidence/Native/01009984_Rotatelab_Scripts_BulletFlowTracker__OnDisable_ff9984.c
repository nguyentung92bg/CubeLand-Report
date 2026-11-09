/* IL2CPP: Rotatelab.Scripts.BulletFlowTracker$$OnDisable
void Rotatelab_Scripts_BulletFlowTracker__OnDisable (Rotatelab_Scripts_BulletFlowTracker_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BulletFlowTracker$$OnDisable
   void Rotatelab_Scripts_BulletFlowTracker__OnDisable (Rotatelab_Scripts_BulletFlowTracker_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_BulletFlowTracker__OnDisable_ff9984(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar5 = (char *)(_UNK_01009c08 + 0x1009998);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01009c0c + 0x10099ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01009c10 + 0x10099b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01009c14 + 0x10099c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01009c18 + 0x10099d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01009c1c + 0x10099dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01009c20 + 0x10099e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01009c24 + 0x10099f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01009c28 + 0x1009a00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01009c2c + 0x1009a0c));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_01009c30 + 0x1009a20);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  puVar9 = *(undefined4 **)(_UNK_01009c34 + 0x1009a44);
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
  uVar4 = thunk_FUN_00f00cdc(*puVar9);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01009c38 + 0x1009a64),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar6,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 4) = uVar4;
  thunk_FUN_00ec5080();
  piVar7 = *(int **)(_UNK_01009c3c + 0x1009a9c);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x84);
  uVar4 = thunk_FUN_00f00cdc(*puVar9);
  puVar8 = *(undefined4 **)(_UNK_01009c40 + 0x1009ad8);
  System_Action___ctor_2b10bac(uVar4,param_1,*puVar8,0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar6,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x84) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x78);
  uVar4 = thunk_FUN_00f00cdc(*puVar9);
  System_Action___ctor_2b10bac(uVar4,param_1,*puVar8,0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar6,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x78) = uVar4;
  thunk_FUN_00ec5080();
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01009c44 + 0x1009b58));
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01009c48 + 0x1009b6c));
  System_Action_bool____ctor_17aaff0(uVar4,param_1,**(undefined4 **)(_UNK_01009c4c + 0x1009b88),0);
  if (iVar3 != 0) {
    Rotatelab_Scripts_LevelStateManager__remove_OnPauseStateChanged_1016394(iVar3,uVar4,0);
    uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x1c);
    uVar4 = thunk_FUN_00f00cdc(*puVar9);
    System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01009c50 + 0x1009bd8),0);
    uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar6,uVar4,0);
    puVar9 = (undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x1c);
    *puVar9 = uVar4;
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar9 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)puVar9 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


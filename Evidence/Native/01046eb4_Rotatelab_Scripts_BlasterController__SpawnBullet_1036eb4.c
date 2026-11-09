/* IL2CPP: Rotatelab.Scripts.BlasterController$$SpawnBullet
void Rotatelab_Scripts_BlasterController__SpawnBullet (Rotatelab_Scripts_BlasterController_o* __this, Rotatelab_Scripts_BaseTargetableController_o* target, UnityEngine_Vector3_o targetPoint, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$SpawnBullet
   void Rotatelab_Scripts_BlasterController__SpawnBullet (Rotatelab_Scripts_BlasterController_o*
   __this, Rotatelab_Scripts_BaseTargetableController_o* target, UnityEngine_Vector3_o targetPoint,
   const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__SpawnBullet_1036eb4
               (int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_010472a4 + 0x1046ed4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010472a8 + 0x1046eec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010472ac + 0x1046ef8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010472b0 + 0x1046f04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010472b4 + 0x1046f10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010472b8 + 0x1046f1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010472bc + 0x1046f28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010472c0 + 0x1046f34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010472c4 + 0x1046f40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010472c8 + 0x1046f4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010472cc + 0x1046f58));
    *pcVar6 = '\x01';
  }
  piVar7 = *(int **)(_UNK_010472d0 + 0x1046f6c);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  if (*(int *)(*(int *)(iVar1 + 0x5c) + 0x7c) == 0) {
    if (*(int *)(param_1 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_Pool_ObjectPool_object___Get_1857ab4
                      (*(int *)(param_1 + 0xb0),**(undefined4 **)(_UNK_010472d4 + 0x1046fb0));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Component__get_transform_35fe190(iVar1,0);
    if (*(int *)(param_1 + 0x74) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_position_36149b0(&uStack_30,*(int *)(param_1 + 0x74),0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_position_3614acc(iVar2,uStack_30,uStack_2c,uStack_28,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_BulletController__Initialize_ff82c8
              (iVar1,param_2,param_3,param_4,param_5,*(undefined4 *)(param_1 + 0x10c),0);
    piVar7 = *(int **)(_UNK_010472d8 + 0x1047074);
  }
  if (param_2 == (int *)0x0) {
LAB_010470ac:
    uVar3 = *(int *)(param_1 + 0x114) - 1;
    *(uint *)(param_1 + 0x114) = uVar3 & ~((int)uVar3 >> 0x1f);
    Rotatelab_Scripts_BlasterController__UpdateBulletCount_1031a08(param_1);
    piVar5 = *(int **)(_UNK_010472e0 + 0x10470d0);
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar5;
    }
    if (**(int **)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_Int32Enum__int___Raise_23a45d8
              (**(int **)(iVar1 + 0x5c),*(undefined4 *)(param_1 + 0x10c),1,
               **(undefined4 **)(_UNK_010472e4 + 0x1047110));
    iVar1 = *(int *)(*(int *)(*piVar5 + 0x5c) + 4);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction__Raise_fc08b8(iVar1,0);
    if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  else {
    uVar3 = (uint)*(byte *)(**(int **)(_UNK_010472dc + 0x1047084) + 0xb8);
    if ((*(byte *)(*param_2 + 0xb8) < uVar3) ||
       (*(int *)(*(int *)(*param_2 + 100) + uVar3 * 4 + -4) != **(int **)(_UNK_010472dc + 0x1047084)
       )) goto LAB_010470ac;
  }
  (**(code **)(*param_2 + 0x110))(param_2,*(undefined4 *)(*param_2 + 0x114));
  if (*(int *)(param_1 + 0x10c) == 0x16) {
    iVar1 = *param_2;
    uVar4 = (uint)*(byte *)(**(int **)(_UNK_010472e8 + 0x1047174) + 0xb8);
    uVar3 = (uint)*(byte *)(iVar1 + 0xb8);
    if ((uVar3 < uVar4) ||
       (*(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_010472e8 + 0x1047174)))
    {
      uVar4 = (uint)*(byte *)(**(int **)(_UNK_010472ec + 0x10471a8) + 0xb8);
      if ((uVar3 < uVar4) ||
         (*(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_010472ec + 0x10471a8))
         ) {
        uVar4 = (uint)*(byte *)(**(int **)(_UNK_010472f0 + 0x10471d4) + 0xb8);
        if ((uVar3 < uVar4) ||
           (*(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) !=
            **(int **)(_UNK_010472f0 + 0x10471d4))) {
          uVar4 = (uint)*(byte *)(**(int **)(_UNK_010472f4 + 0x1047200) + 0xb8);
          if ((uVar3 < uVar4) ||
             (*(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) !=
              **(int **)(_UNK_010472f4 + 0x1047200))) goto LAB_01047260;
        }
      }
    }
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010472f8 + 0x104722c));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_PlaceableManager__ConsumeBulletsOfQueuedBlastersExternally_104903c
              (iVar1,param_2[5],1,0,0);
  }
LAB_01047260:
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  if (*(int *)(*(int *)(iVar1 + 0x5c) + 0x7c) != 0) {
    (**(code **)(*param_2 + 0x118))(param_2,*(undefined4 *)(*param_2 + 0x11c));
  }
  return;
}


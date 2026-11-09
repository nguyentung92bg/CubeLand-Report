/* IL2CPP: Rotatelab.Scripts.BlasterController$$ConsumeBulletsExternally
int32_t Rotatelab_Scripts_BlasterController__ConsumeBulletsExternally (Rotatelab_Scripts_BlasterController_o* __this, int32_t colorType, int32_t totalBulletsToConsume, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$ConsumeBulletsExternally
   int32_t Rotatelab_Scripts_BlasterController__ConsumeBulletsExternally
   (Rotatelab_Scripts_BlasterController_o* __this, int32_t colorType, int32_t totalBulletsToConsume,
   const MethodInfo* method); */

int Rotatelab_Scripts_BlasterController__ConsumeBulletsExternally_10372fc
              (int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  pcVar6 = (char *)(_UNK_01047700 + 0x104731c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01047704 + 0x1047330));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01047708 + 0x104733c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104770c + 0x1047348));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01047710 + 0x1047354));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01047714 + 0x1047360));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01047718 + 0x104736c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104771c + 0x1047378));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01047720 + 0x1047384));
    *pcVar6 = '\x01';
  }
  if (param_1[0x43] == param_2) {
    iVar1 = param_1[0x45];
    if (iVar1 <= param_3) {
      param_3 = iVar1;
    }
    if (param_3 != 0) {
      param_1[0x45] = iVar1 - param_3;
      Rotatelab_Scripts_BlasterController__UpdateBulletCount_1031a08(param_1);
      piVar7 = *(int **)(_UNK_01047738 + 0x10473c8);
      iVar1 = *piVar7;
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar7;
      }
      if (**(int **)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_GameAction_Int32Enum__int___Raise_23a45d8
                (**(int **)(iVar1 + 0x5c),param_2,param_3,
                 **(undefined4 **)(_UNK_0104773c + 0x1047404));
      if (param_1[0x45] != 0) {
        return param_3;
      }
      if (param_1[0x44] != 0) {
        Rotatelab_Scripts_BlasterController__ShowSecondaryBlaster_1036af4(param_1,1);
        return param_3;
      }
      piVar7 = (int *)param_1[0x2e];
      if (piVar7 != (int *)0x0) {
        uVar4 = (uint)*(byte *)(**(int **)(_UNK_01047740 + 0x10476b4) + 0xb8);
        if ((uVar4 <= *(byte *)(*piVar7 + 0xb8)) &&
           (*(int *)(*(int *)(*piVar7 + 100) + uVar4 * 4 + -4) ==
            **(int **)(_UNK_01047740 + 0x10476b4))) {
          Rotatelab_Scripts_BlasterGeneratorController__OnInnerBlasterRemovedExternally_1037744
                    (piVar7,param_1);
        }
      }
      Rotatelab_Scripts_BlasterController__BreakAllConnections_10329f4(param_1);
      Rotatelab_Scripts_BlasterController__BreakChains_1033c88(param_1,0);
      Rotatelab_Scripts_BlasterController__Destroy_103784c(param_1);
      return param_3;
    }
  }
  else {
    if (param_1[0x44] != param_2) {
      piVar7 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_01047724 + 0x10474a8),4);
      if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar5 = *(int **)(_UNK_01047728 + 0x10474c8);
      iVar1 = *piVar5;
      if ((iVar1 != 0) &&
         (iVar1 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar7 + 0x20)), iVar1 == 0)) {
        uVar2 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar2,0);
      }
      iVar1 = *piVar5;
      if (piVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar7[4] = iVar1;
      thunk_FUN_00ec5080(piVar7 + 4,iVar1);
      puVar9 = *(undefined4 **)(_UNK_0104772c + 0x1047524);
      iStack_1c = param_2;
      iVar1 = FUN_00ec393c(*puVar9,&iStack_1c);
      if ((iVar1 != 0) &&
         (iVar8 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar7 + 0x20)), iVar8 == 0)) {
        uVar2 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar2,0);
      }
      if ((uint)piVar7[3] < 2) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar7[5] = iVar1;
      thunk_FUN_00ec5080(piVar7 + 5,iVar1);
      iStack_20 = param_1[0x43];
      iVar1 = FUN_00ec393c(*puVar9,&iStack_20);
      if ((iVar1 != 0) &&
         (iVar8 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar7 + 0x20)), iVar8 == 0)) {
        uVar2 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar2,0);
      }
      if (2 < (uint)piVar7[3]) {
        piVar7[6] = iVar1;
        thunk_FUN_00ec5080(piVar7 + 6,iVar1);
        iStack_24 = param_1[0x44];
        iVar1 = FUN_00ec393c(*puVar9,&iStack_24);
        if ((iVar1 != 0) &&
           (iVar8 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar7 + 0x20)), iVar8 == 0)) {
          uVar2 = thunk_FUN_00f08b98();
          func_0x00ec3920(uVar2,0);
        }
        if (3 < (uint)piVar7[3]) {
          piVar7[7] = iVar1;
          thunk_FUN_00ec5080(piVar7 + 7,iVar1);
          uVar2 = System_String__Format_2a0c308
                            (**(undefined4 **)(_UNK_01047730 + 0x104765c),piVar7,0);
          if (*(int *)(**(int **)(_UNK_01047734 + 0x1047670) + 0x74) == 0) {
            FUN_00ec3934();
          }
          UnityEngine_Debug__LogError_35b24c8(uVar2,param_1,0);
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar8 = param_1[0x2d];
    iVar1 = iVar8;
    if (param_3 < iVar8) {
      iVar1 = param_3;
    }
    if (iVar1 != 0) {
      param_1[0x2d] = iVar8 - iVar1;
      if (param_3 < iVar8) {
        return iVar1;
      }
      pcVar3 = *(code **)(*param_1 + 0x118);
      uVar2 = *(undefined4 *)(*param_1 + 0x11c);
      param_1[0x44] = 0;
      (*pcVar3)(param_1,uVar2);
      return iVar8;
    }
  }
  return 0;
}


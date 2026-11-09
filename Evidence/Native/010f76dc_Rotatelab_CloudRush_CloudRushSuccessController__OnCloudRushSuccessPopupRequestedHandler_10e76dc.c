/* IL2CPP: Rotatelab.CloudRush.CloudRushSuccessController$$OnCloudRushSuccessPopupRequestedHandler
void Rotatelab_CloudRush_CloudRushSuccessController__OnCloudRushSuccessPopupRequestedHandler (Rotatelab_CloudRush_CloudRushSuccessController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0113482c) */
/* WARNING: Removing unreachable block (ram,0x01134834) */
/* WARNING: Removing unreachable block (ram,0x01134838) */
/* WARNING: Removing unreachable block (ram,0x01134858) */
/* WARNING: Removing unreachable block (ram,0x01134864) */
/* WARNING: Removing unreachable block (ram,0x01134868) */
/* WARNING: Removing unreachable block (ram,0x01134874) */
/* WARNING: Removing unreachable block (ram,0x01134880) */
/* WARNING: Removing unreachable block (ram,0x01134884) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushSuccessController$$OnCloudRushSuccessPopupRequestedHandler
   void Rotatelab_CloudRush_CloudRushSuccessController__OnCloudRushSuccessPopupRequestedHandler
   (Rotatelab_CloudRush_CloudRushSuccessController_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushSuccessController__OnCloudRushSuccessPopupRequestedHandler_10e76dc
               (int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  
  pcVar8 = (char *)(_UNK_010f787c + 0x10f76f4);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f7880 + 0x10f7708));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f7884 + 0x10f7714));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f7888 + 0x10f7720));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f788c + 0x10f772c));
    *pcVar8 = '\x01';
  }
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x14),0);
  pcVar8 = (char *)(_UNK_010f7890 + 0x10f7760);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f7894 + 0x10f7774));
    *pcVar8 = '\x01';
  }
  puVar2 = *(undefined4 **)(**(int **)(_UNK_010f7898 + 0x10f778c) + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar1,*puVar2,puVar2[1],puVar2[2],0);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x14),0);
  uVar3 = DG_Tweening_ShortcutExtensions__DOScale_116ba14(uVar3,0x3f800000,0x3e19999a,0);
  uVar3 = DG_Tweening_TweenSettingsExtensions__SetDelay_object__15d9f0c
                    (uVar3,0x3f000000,**(undefined4 **)(_UNK_010f789c + 0x10f77f8));
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010f78a0 + 0x10f7810));
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar4,param_1,**(undefined4 **)(_UNK_010f78a4 + 0x10f782c),0);
  DG_Tweening_TweenSettingsExtensions__OnComplete_object__15d9e0c
            (uVar3,uVar4,**(undefined4 **)(_UNK_010f78a8 + 0x10f7844));
  Rotatelab_CloudRush_CloudRushSuccessController__UpdatePopup_10e7398(param_1);
  piVar9 = *(int **)(param_1 + 0x10);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar8 = (char *)(_UNK_0113479c + 0x113474c);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011347a0 + 0x1134760),0,0);
    *pcVar8 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_011347a4 + 0x1134774));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar8 = (char *)(_UNK_01134908 + 0x11347c4);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113490c + 0x11347d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134910 + 0x11347e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134914 + 0x11347f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134918 + 0x11347fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113491c + 0x1134808));
    *pcVar8 = '\x01';
  }
  uVar3 = *(undefined4 *)(iVar1 + 0x10);
  if (*(int *)(**(int **)(_UNK_01134920 + 0x1134820) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar5 = Rotatelab_Extensions__AddUnique_object__1484964
                    (uVar3,piVar9,**(undefined4 **)(_UNK_0113492c + 0x11348c8));
  if (iVar5 != 0) {
    if (*(int *)(iVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(iVar1 + 0x10) + 0xc) == 1) {
      pcVar8 = (char *)(_UNK_01134fac + 0x1134f14);
      if (*pcVar8 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01134fb0 + 0x1134f28));
        *pcVar8 = '\x01';
      }
      if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *piVar9;
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_01134fb4 + 0x1134f4c)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
            goto LAB_01134f94;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_01134fb4 + 0x1134f4c),0);
LAB_01134f94:
                    /* WARNING: Could not recover jumptable at 0x01134fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(piVar9,1,puVar2[1]);
      return;
    }
  }
  return;
}


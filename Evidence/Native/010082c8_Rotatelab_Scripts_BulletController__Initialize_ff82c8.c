/* IL2CPP: Rotatelab.Scripts.BulletController$$Initialize
void Rotatelab_Scripts_BulletController__Initialize (Rotatelab_Scripts_BulletController_o* __this, Rotatelab_Scripts_BaseTargetableController_o* target, UnityEngine_Vector3_o targetWorldPoint, int32_t colorType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BulletController$$Initialize
   void Rotatelab_Scripts_BulletController__Initialize (Rotatelab_Scripts_BulletController_o*
   __this, Rotatelab_Scripts_BaseTargetableController_o* target, UnityEngine_Vector3_o
   targetWorldPoint, int32_t colorType, const MethodInfo* method); */

void Rotatelab_Scripts_BulletController__Initialize_ff82c8
               (int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  pcVar5 = (char *)(_UNK_010086b8 + 0x10082f4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010086bc + 0x1008308));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010086c0 + 0x1008314));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010086c4 + 0x1008320));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010086c8 + 0x100832c));
    *pcVar5 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x38) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x38),param_2);
  if (param_2 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    piVar7 = (int *)0x0;
  }
  else {
    iVar3 = **(int **)(_UNK_010086cc + 0x100835c);
    uVar4 = (uint)*(byte *)(iVar3 + 0xb8);
    piVar7 = (int *)0x0;
    if ((uVar4 <= *(byte *)(*param_2 + 0xb8)) &&
       (piVar7 = param_2, *(int *)(*(int *)(*param_2 + 100) + uVar4 * 4 + -4) != iVar3)) {
      piVar7 = (int *)0x0;
    }
    *(int **)(param_1 + 0x3c) = piVar7;
    piVar7 = (int *)0x0;
    if ((uVar4 <= *(byte *)(*param_2 + 0xb8)) &&
       (piVar7 = param_2, *(int *)(*(int *)(*param_2 + 100) + uVar4 * 4 + -4) != iVar3)) {
      piVar7 = (int *)0x0;
    }
  }
  thunk_FUN_00ec5080(param_1 + 0x3c,piVar7);
  puVar1 = *(undefined4 **)(_UNK_010086d0 + 0x10083e0);
  *(undefined1 *)(param_1 + 0x40) = 0;
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar1);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(iVar3 + 0x50);
  iVar3 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_40,iVar3,0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__InverseTransformPoint_3616aa0
            (&uStack_40,iVar6,uStack_40,uStack_3c,uStack_38,0);
  *(undefined4 *)(param_1 + 0x4c) = uStack_38;
  *(ulonglong *)(param_1 + 0x44) = CONCAT44(uStack_3c,uStack_40);
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = (**(code **)(*param_2 + 0x128))(param_2,*(undefined4 *)(*param_2 + 300));
  piVar7 = (int *)(param_1 + 0x50);
  *piVar7 = iVar3;
  thunk_FUN_00ec5080(piVar7,iVar3);
  if (*piVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__InverseTransformPoint_3616aa0(&uStack_50,*piVar7,param_3,param_4,param_5,0)
  ;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  iVar6 = *(int *)(param_1 + 0x10);
  puVar1 = *(undefined4 **)(_UNK_010086d4 + 0x10084f0);
  uVar2 = *puVar1;
  *(undefined4 *)(param_1 + 0x5c) = uStack_48;
  *(undefined4 *)(param_1 + 0x60) = param_3;
  *(undefined4 *)(param_1 + 100) = param_4;
  *(undefined4 *)(param_1 + 0x68) = param_5;
  *(undefined8 *)(param_1 + 0x54) = uStack_50;
  iVar3 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(uVar2);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = Rotatelab_Scripts_BlasterColorDataSo__GetDataByType_ff4740(iVar3,param_6);
  if (iVar3 != 0) {
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Renderer__set_material_35c59b4(iVar6,*(undefined4 *)(iVar3 + 0x60),0);
    iVar6 = *(int *)(param_1 + 0x14);
    iVar3 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar1);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = Rotatelab_Scripts_BlasterColorDataSo__GetDataByType_ff4740(iVar3,param_6);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar6 != 0) {
      UnityEngine_Renderer__set_material_35c59b4(iVar6,*(undefined4 *)(iVar3 + 100),0);
      iVar3 = UnityEngine_Component__get_transform_35fe190(param_1,0);
      pcVar5 = (char *)(_UNK_010086d8 + 0x10085d0);
      if (*pcVar5 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010086dc + 0x10085e4));
        *pcVar5 = '\x01';
      }
      iVar6 = *(int *)(**(int **)(_UNK_010086e0 + 0x10085fc) + 0x5c);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__set_localScale_36155dc
                (iVar3,*(undefined4 *)(iVar6 + 0xc),*(undefined4 *)(iVar6 + 0x10),
                 *(undefined4 *)(iVar6 + 0x14),0);
      if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_TrailRenderer__Clear_35c2a10(*(int *)(param_1 + 0x14),0);
      if (*(int *)(param_1 + 0x14) != 0) {
        UnityEngine_TrailRenderer__set_widthMultiplier_35c2914
                  (*(int *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x34),0);
        iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                          (**(undefined4 **)(_UNK_010086e4 + 0x100867c));
        if (iVar3 != 0) {
          uVar2 = Rotatelab_Scripts_LevelStateManager__get_IsWinSequenceAnimating_1006428(iVar3,0);
          Rotatelab_Scripts_BulletController__SetWinSequenceActive_ff86e8(param_1,uVar2);
          return;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


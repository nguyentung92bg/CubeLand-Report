/* IL2CPP: Rotatelab.Scripts.BlasterController$$Place
void Rotatelab_Scripts_BlasterController__Place (Rotatelab_Scripts_BlasterController_o* __this, Rotatelab_Scripts_BaseBlasterDockController_o* dock, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$Place
   void Rotatelab_Scripts_BlasterController__Place (Rotatelab_Scripts_BlasterController_o* __this,
   Rotatelab_Scripts_BaseBlasterDockController_o* dock, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__Place_1035b6c(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  int *piVar15;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar13 = (char *)(_UNK_01045f38 + 0x1045b88);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01045f3c + 0x1045b9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01045f40 + 0x1045ba8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01045f44 + 0x1045bb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01045f48 + 0x1045bc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01045f4c + 0x1045bcc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01045f50 + 0x1045bd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01045f54 + 0x1045be4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01045f58 + 0x1045bf0));
    *pcVar13 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar14 = param_1[0x2f];
  uStack_38 = 0;
  if (*(int *)(**(int **)(_UNK_01045f5c + 0x1045c0c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar14 = UnityEngine_Object__op_Inequality_36018e4(iVar14,0,0);
  if (iVar14 != 0) {
    if (param_1[0x2f] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_BaseDockController__Empty_100b530(param_1[0x2f],param_1,0);
  }
  if ((int *)param_1[0x2e] != (int *)0x0) {
    iVar14 = *(int *)param_1[0x2e];
    uVar11 = (uint)*(byte *)(**(int **)(_UNK_01045f60 + 0x1045c74) + 0xb8);
    if ((uVar11 <= *(byte *)(iVar14 + 0xb8)) &&
       (*(int *)(*(int *)(iVar14 + 100) + uVar11 * 4 + -4) == **(int **)(_UNK_01045f60 + 0x1045c74))
       ) {
      Rotatelab_Scripts_BlasterGeneratorController__OnExposedBlasterEjecting_1035f80();
    }
  }
  if (*(char *)((int)param_1 + 0xc2) != '\0') {
    Rotatelab_Scripts_BlasterController__AnimateHiddenReveal_103481c(param_1);
  }
  Rotatelab_Scripts_BlasterController__OnBeingPlacedToDock_1036220(param_1,param_2);
  if (*(char *)((int)param_1 + 0xc1) == '\0') {
    (**(code **)(*param_1 + 0x150))(param_1,5,*(undefined4 *)(*param_1 + 0x154));
  }
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (param_2[4] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localPosition_3613b6c(&uStack_50,param_2[4],0);
  Rotatelab_Scripts_BasePlaceableController__LocalMove_10306f0
            (&uStack_50,param_1,uStack_50,uStack_4c,uStack_48,0x3e800000,0,0,0);
  uVar11 = (uint)*(byte *)(**(int **)(_UNK_01045f64 + 0x1045d40) + 0xb8);
  if ((uVar11 <= *(byte *)(*param_2 + 0xb8)) &&
     (*(int *)(*(int *)(*param_2 + 100) + uVar11 * 4 + -4) == **(int **)(_UNK_01045f64 + 0x1045d40))
     ) {
    Rotatelab_Scripts_BlasterController__RefreshGhostDockScale_1034104(param_1);
  }
  uVar9 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (param_2[4] != 0) {
    UnityEngine_Transform__get_localRotation_3614f58(&uStack_50,param_2[4],0);
    uVar7 = uStack_44;
    uVar5 = uStack_48;
    uVar3 = uStack_4c;
    uVar1 = uStack_50;
    PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_50,9,0);
    uVar8 = uStack_44;
    uVar6 = uStack_48;
    uVar4 = uStack_4c;
    uVar2 = uStack_50;
    if (*(int *)(**(int **)(_UNK_01045f68 + 0x1045dd8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__LocalRotation_2ce631c
              (&uStack_50,uVar9,uVar1,uVar3,uVar5,uVar7,0x3e800000,uVar2,uVar4,uVar6,uVar8,uStack_40
               ,1,0,0,0,0,0);
    piVar15 = *(int **)(_UNK_01045f6c + 0x1045e5c);
    iVar14 = *piVar15;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    if (*(int *)(iVar14 + 0x74) == 0) {
      FUN_00ec3934();
      iVar14 = *piVar15;
    }
    puVar10 = *(undefined4 **)(iVar14 + 0x5c);
    iVar12 = puVar10[9];
    if (iVar12 == 0) {
      if (*(int *)(iVar14 + 0x74) == 0) {
        FUN_00ec3934();
        puVar10 = *(undefined4 **)(*piVar15 + 0x5c);
      }
      uVar9 = *puVar10;
      iVar12 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01045f70 + 0x1045eb0));
      System_Action_object____ctor_1f11414
                (iVar12,uVar9,**(undefined4 **)(_UNK_01045f74 + 0x1045ed0),0);
      piVar15 = (int *)(*(int *)(*piVar15 + 0x5c) + 0x24);
      *piVar15 = iVar12;
      thunk_FUN_00ec5080(piVar15,iVar12);
    }
    if (*(int *)(**(int **)(_UNK_01045f78 + 0x1045ef8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__OnComplete_object__15d62e8
              (&uStack_50,&uStack_38,param_1,iVar12,0,**(undefined4 **)(_UNK_01045f7c + 0x1045f1c));
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


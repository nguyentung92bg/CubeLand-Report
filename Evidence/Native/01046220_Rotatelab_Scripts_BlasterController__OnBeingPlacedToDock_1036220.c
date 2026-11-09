/* IL2CPP: Rotatelab.Scripts.BlasterController$$OnBeingPlacedToDock
void Rotatelab_Scripts_BlasterController__OnBeingPlacedToDock (Rotatelab_Scripts_BlasterController_o* __this, Rotatelab_Scripts_BaseBlasterDockController_o* dock, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$OnBeingPlacedToDock
   void Rotatelab_Scripts_BlasterController__OnBeingPlacedToDock
   (Rotatelab_Scripts_BlasterController_o* __this, Rotatelab_Scripts_BaseBlasterDockController_o*
   dock, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__OnBeingPlacedToDock_1036220(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 uVar3;
  undefined4 unaff_r6;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_01046324 + 0x1046238);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01046328 + 0x104624c));
    *pcVar4 = '\x01';
  }
  piVar5 = param_1 + 0x2f;
  *piVar5 = param_2;
  *(undefined1 *)(param_1 + 0x30) = 0;
  thunk_FUN_00ec5080(piVar5,param_2);
  if (*piVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_BaseDockController_object___Fill_1b27714
            (*piVar5,param_1,**(undefined4 **)(_UNK_0104632c + 0x1046290));
  Rotatelab_Scripts_BlasterController__SetEndlessScaleAnimationEnabled_1034e24(param_1,0);
  Rotatelab_Scripts_BlasterController__SetEndlessShakeAnimationEnabled_1034fbc(param_1,0);
  (**(code **)(*param_1 + 0x110))(param_1,1,*(undefined4 *)(*param_1 + 0x114));
  Rotatelab_Scripts_BlasterController__SetShootingState_1036330(param_1,0);
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_transform_35fe190(param_2,0);
  if (iVar1 != 0) {
    pcVar4 = (char *)(iRam03625a5c + 0x36259b0);
    if (*pcVar4 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(iRam03625a60 + 0x36259c4),iVar2,1,0,unaff_r4,unaff_r5,
                         unaff_r6);
      thunk_FUN_00ec37c0(*(undefined4 *)(iRam03625a64 + 0x36259d0));
      *pcVar4 = '\x01';
    }
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
      }
      if (*(int *)(**(int **)(iRam03625a68 + 0x36259fc) + 0x1c) == 0) {
        thunk_FUN_00efd7c4();
      }
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(iVar2 + 8);
      }
      UNRECOVERED_JUMPTABLE = *(code **)(iRam03625a6c + 0x3625a24);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam03625a70 + 0x3625a34);
        *(code **)(iRam03625a74 + 0x3625a44) = UNRECOVERED_JUMPTABLE;
      }
                    /* WARNING: Could not recover jumptable at 0x03625a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(iVar1,uVar3,1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


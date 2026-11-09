/* IL2CPP: Rotatelab.GameExtensions$$PreventManualRotationDuringAnimation<object>
Il2CppObject* Rotatelab_GameExtensions__PreventManualRotationDuringAnimation_object_ (Il2CppObject* tween, const MethodInfo_1490220* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.GameExtensions$$PreventManualRotationDuringAnimation<object>
   Il2CppObject* Rotatelab_GameExtensions__PreventManualRotationDuringAnimation_object_
   (Il2CppObject* tween, const MethodInfo_1490220* method); */

int Rotatelab_GameExtensions__PreventManualRotationDuringAnimation_object__1490220
              (int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar1 = *(int **)(param_2 + 0x1c);
  if (piVar1 == (int *)0x0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_014a03bc + 0x14a0248));
    FUN_00ec37c0(*(undefined4 *)(_UNK_014a03c0 + 0x14a0254));
    piVar1 = *(int **)(param_2 + 0x1c);
    if (piVar1 == (int *)0x0) {
      FUN_00efd7c4(param_2);
      piVar1 = *(int **)(param_2 + 0x1c);
    }
  }
  if ((*(ushort *)(*piVar1 + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  iVar2 = thunk_FUN_00f00cdc();
  Rotatelab_GameExtensions___c__DisplayClass9_0_object____ctor_1783b48
            (iVar2,*(undefined4 *)(*(int *)(param_2 + 0x1c) + 4));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar1 = (int *)(iVar2 + 8);
  *piVar1 = param_1;
  thunk_FUN_00ec5080(piVar1,param_1);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_014a03c4 + 0x14a02c4));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_CameraManager__TrySetManualRotationAllowed_ffbbd4(iVar3,0,*piVar1,0);
  if (*piVar1 != 0) {
    piVar7 = *(int **)(_UNK_014a03c8 + 0x14a030c);
    piVar6 = (int *)(*piVar1 + 0x50);
    iVar3 = *piVar6;
    uVar4 = thunk_FUN_00f00cdc(*piVar7);
    DG_Tweening_TweenCallback___ctor_11657e8
              (uVar4,iVar2,*(undefined4 *)(*(int *)(param_2 + 0x1c) + 0xc),0);
    piVar5 = (int *)System_Delegate__Combine_2bbca94(iVar3,uVar4,0);
    if (piVar5 == (int *)0x0) {
      *piVar6 = 0;
      piVar5 = (int *)0x0;
    }
    else {
      iVar2 = *piVar7;
      if (*piVar5 != iVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(piVar5);
      }
      *piVar6 = (int)piVar5;
      if (*piVar5 != iVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(piVar5);
      }
    }
    thunk_FUN_00ec5080(piVar6,piVar5);
    return *piVar1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


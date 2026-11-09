/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<OnWinSequenceStartedCoroutine>b__83_0
bool Rotatelab_Scripts_PlaceableManager___c___OnWinSequenceStartedCoroutine_b__83_0 (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_BasePlaceableController_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<OnWinSequenceStartedCoroutine>b__83_0
   bool Rotatelab_Scripts_PlaceableManager___c___OnWinSequenceStartedCoroutine_b__83_0
   (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_BasePlaceableController_o*
   e, const MethodInfo* method); */

undefined1
Rotatelab_Scripts_PlaceableManager___c___OnWinSequenceStartedCoroutine_b__83_0_104bb20
          (undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iStack_c;
  
  uVar2 = 0;
  iStack_c = 0;
  iVar1 = Rotatelab_Scripts_PlaceableManager__TryGetBlasterFromPlaceable_1046d14(param_2,&iStack_c);
  if (iVar1 != 0) {
    if (iStack_c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = 0;
    if (*(char *)(iStack_c + 0xc4) != '\0') {
      uVar2 = 1;
    }
  }
  return uVar2;
}


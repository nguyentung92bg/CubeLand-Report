/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$OnLevelLoadedHandler
void Rotatelab_Scripts_LiveSolverGuideController__OnLevelLoadedHandler (Rotatelab_Scripts_LiveSolverGuideController_o* __this, Rotatelab_SoLevelData_o* levelData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$OnLevelLoadedHandler
   void Rotatelab_Scripts_LiveSolverGuideController__OnLevelLoadedHandler
   (Rotatelab_Scripts_LiveSolverGuideController_o* __this, Rotatelab_SoLevelData_o* levelData, const
   MethodInfo* method); */

void Rotatelab_Scripts_LiveSolverGuideController__OnLevelLoadedHandler_1059128(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_0106924c + 0x106913c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01069250 + 0x1069150));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01069254 + 0x106915c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01069258 + 0x1069168));
    *pcVar5 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_0106925c + 0x106917c);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
  puVar8 = *(undefined4 **)(_UNK_01069260 + 0x1069190);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  puVar6 = *(undefined4 **)(_UNK_01069264 + 0x10691ac);
  System_Action_object____ctor_1f11414(uVar4,param_1,*puVar6,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_PlaceableManager__remove_OnPlaceableLeftQueue_1040e3c(iVar3,uVar4);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action_object____ctor_1f11414(uVar4,param_1,*puVar6,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_PlaceableManager__add_OnPlaceableLeftQueue_1040d8c(iVar3,uVar4);
  Rotatelab_Scripts_LiveSolverGuideController__StopActiveSolve_105905c(param_1);
  if (*(int *)(param_1 + 0x30) != 0) {
    Rotatelab_Scripts_BlasterHighlight__Clear_ff6414(*(int *)(param_1 + 0x30),0);
    Rotatelab_Scripts_LiveSolverGuideController__ClearPin_10590c4(param_1);
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined1 *)(param_1 + 0x4c) = 0;
    pcVar5 = (char *)(_UNK_01069050 + 0x1068fb4);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01069054 + 0x1068fc8));
      *pcVar5 = '\x01';
    }
    if (*(char *)(param_1 + 0x6c) == '\0') {
      return;
    }
    Rotatelab_Scripts_LiveSolverGuideController__StopActiveSolve_105905c(param_1);
    uVar4 = UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
    puVar6 = *(undefined4 **)(_UNK_01069058 + 0x1069000);
    *(undefined4 *)(param_1 + 0x50) = uVar4;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x60) = *puVar6;
    *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    thunk_FUN_00ec5080();
    *(undefined1 *)(param_1 + 100) = 0;
    uVar4 = Rotatelab_Scripts_LiveSolverGuideController__SolveRoutine_105964c(param_1);
    uVar4 = UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar4,0);
    puVar6 = (undefined4 *)(param_1 + 0x34);
    *puVar6 = uVar4;
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar6 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)puVar6 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


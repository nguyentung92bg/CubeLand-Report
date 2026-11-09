/* IL2CPP: Rotatelab.Scripts.LevelManager$$OnSatoriFlagsRefreshed
void Rotatelab_Scripts_LevelManager__OnSatoriFlagsRefreshed (Rotatelab_Scripts_LevelManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.LevelManager$$OnSatoriFlagsRefreshed
   void Rotatelab_Scripts_LevelManager__OnSatoriFlagsRefreshed (Rotatelab_Scripts_LevelManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_LevelManager__OnSatoriFlagsRefreshed_10682dc(undefined4 param_1)

{
  undefined1 uStack_11;
  
  uStack_11 = 0;
  uStack_11 = Rotatelab_Scripts_LevelManager__LoadLevelOverridesAsync_106832c(param_1);
  Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&uStack_11,0);
  uStack_11 = Rotatelab_Scripts_LevelManager__LoadLevelABTestsAsync_10683bc(param_1);
  Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&uStack_11,0);
  return;
}


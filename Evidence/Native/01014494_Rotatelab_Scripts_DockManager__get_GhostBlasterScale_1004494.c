/* IL2CPP: Rotatelab.Scripts.DockManager$$get_GhostBlasterScale
float Rotatelab_Scripts_DockManager__get_GhostBlasterScale (Rotatelab_Scripts_DockManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.DockManager$$get_GhostBlasterScale
   float Rotatelab_Scripts_DockManager__get_GhostBlasterScale (Rotatelab_Scripts_DockManager_o*
   __this, const MethodInfo* method); */

undefined4 Rotatelab_Scripts_DockManager__get_GhostBlasterScale_1004494(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 100) == '\0') {
    uVar3 = 0x3f400000;
  }
  else {
    iVar1 = Rotatelab_GameExtensions__OccupiedDockCount_fb4db0(*(undefined4 *)(param_1 + 0x48),0);
    if (iVar1 < 7) {
      puVar2 = (undefined4 *)(param_1 + 0x38);
    }
    else if (iVar1 == 7) {
      puVar2 = (undefined4 *)(param_1 + 0x3c);
    }
    else {
      puVar2 = (undefined4 *)(param_1 + 0x40);
    }
    uVar3 = *puVar2;
  }
  return uVar3;
}


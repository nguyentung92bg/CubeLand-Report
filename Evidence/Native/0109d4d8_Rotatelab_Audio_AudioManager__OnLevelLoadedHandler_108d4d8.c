/* IL2CPP: Rotatelab.Audio.AudioManager$$OnLevelLoadedHandler
void Rotatelab_Audio_AudioManager__OnLevelLoadedHandler (Rotatelab_Audio_AudioManager_o* __this, Rotatelab_SoLevelData_o* levelData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Audio.AudioManager$$OnLevelLoadedHandler
   void Rotatelab_Audio_AudioManager__OnLevelLoadedHandler (Rotatelab_Audio_AudioManager_o* __this,
   Rotatelab_SoLevelData_o* levelData, const MethodInfo* method); */

void Rotatelab_Audio_AudioManager__OnLevelLoadedHandler_108d4d8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = Rotatelab_Audio_AudioManager__GetVoxelBreakGroup_108d404(param_1,0xc);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined1 *)(iVar1 + 0x54) = 0;
  return;
}


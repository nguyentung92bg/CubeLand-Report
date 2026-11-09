/* IL2CPP: Rotatelab.Scripts.LevelManager$$get_RoundNumber
Rotatelab_ObservableLong_o* Rotatelab_Scripts_LevelManager__get_RoundNumber (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.LevelManager$$get_RoundNumber
   Rotatelab_ObservableLong_o* Rotatelab_Scripts_LevelManager__get_RoundNumber (const MethodInfo*
   method); */

undefined4 Rotatelab_Scripts_LevelManager__get_RoundNumber_1067e18(void)

{
  int iVar1;
  
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(undefined4 *)(iVar1 + 0x1c);
}


/* IL2CPP: Rotatelab.WinStreak.Stage$$<CollectReward>b__27_0
void Rotatelab_WinStreak_Stage___CollectReward_b__27_0 (Rotatelab_WinStreak_Stage_o* __this, Rotatelab_WinStreak_Chest_o* chest, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.WinStreak.Stage$$<CollectReward>b__27_0
   void Rotatelab_WinStreak_Stage___CollectReward_b__27_0 (Rotatelab_WinStreak_Stage_o* __this,
   Rotatelab_WinStreak_Chest_o* chest, const MethodInfo* method); */

void Rotatelab_WinStreak_Stage___CollectReward_b__27_0_10916e4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_WinStreak_Chest__Collect_10903a8(param_2);
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  uVar2 = Rotatelab_WinStreak_Stage__get_Index_1090ebc(param_1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar1 + 0xa4) = uVar2;
  return;
}


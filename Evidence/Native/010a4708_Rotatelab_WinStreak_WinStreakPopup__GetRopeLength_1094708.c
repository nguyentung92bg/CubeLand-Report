/* IL2CPP: Rotatelab.WinStreak.WinStreakPopup$$GetRopeLength
float Rotatelab_WinStreak_WinStreakPopup__GetRopeLength (Rotatelab_WinStreak_WinStreakPopup_o* __this, float levelHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.WinStreak.WinStreakPopup$$GetRopeLength
   float Rotatelab_WinStreak_WinStreakPopup__GetRopeLength (Rotatelab_WinStreak_WinStreakPopup_o*
   __this, float levelHeight, const MethodInfo* method); */

float Rotatelab_WinStreak_WinStreakPopup__GetRopeLength_1094708(int param_1,float param_2)

{
  uint in_fpscr;
  float fVar1;
  
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar1 = (float)VectorSignedToFloat(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0xc),
                                     (byte)(in_fpscr >> 0x16) & 3);
  return *(float *)(param_1 + 0x34) + (*(float *)(param_1 + 0x2c) * fVar1 - param_2);
}


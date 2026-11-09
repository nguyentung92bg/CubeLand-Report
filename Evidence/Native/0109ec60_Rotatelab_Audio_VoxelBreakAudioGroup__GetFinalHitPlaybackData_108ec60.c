/* IL2CPP: Rotatelab.Audio.VoxelBreakAudioGroup$$GetFinalHitPlaybackData
void Rotatelab_Audio_VoxelBreakAudioGroup__GetFinalHitPlaybackData (Rotatelab_Audio_VoxelBreakAudioGroup_o* __this, UnityEngine_AudioClip_o** clip, float* volume, float* pitch, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Audio.VoxelBreakAudioGroup$$GetFinalHitPlaybackData
   void Rotatelab_Audio_VoxelBreakAudioGroup__GetFinalHitPlaybackData
   (Rotatelab_Audio_VoxelBreakAudioGroup_o* __this, UnityEngine_AudioClip_o** clip, float* volume,
   float* pitch, const MethodInfo* method); */

void Rotatelab_Audio_VoxelBreakAudioGroup__GetFinalHitPlaybackData_108ec60
               (int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = Rotatelab_Audio_AudioGroup__PickClip_108cbac();
  *param_2 = uVar1;
  thunk_FUN_00ec5080(param_2,uVar1);
  *param_3 = *(undefined4 *)(param_1 + 0x40);
  *param_4 = *(undefined4 *)(param_1 + 0x3c);
  return;
}


/* IL2CPP: Rotatelab.Audio.AudioGroup$$GetPlaybackData
void Rotatelab_Audio_AudioGroup__GetPlaybackData (Rotatelab_Audio_AudioGroup_o* __this, UnityEngine_AudioClip_o** clip, float* volume, float* pitch, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Audio.AudioGroup$$GetPlaybackData
   void Rotatelab_Audio_AudioGroup__GetPlaybackData (Rotatelab_Audio_AudioGroup_o* __this,
   UnityEngine_AudioClip_o** clip, float* volume, float* pitch, const MethodInfo* method); */

void Rotatelab_Audio_AudioGroup__GetPlaybackData_108cd20
               (int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = Rotatelab_Audio_AudioGroup__PickClip_108cbac();
  *param_2 = uVar1;
  thunk_FUN_00ec5080(param_2,uVar1);
  uVar1 = UnityEngine_Random__Range_35f8ac0(param_1[5],param_1[6],0);
  *param_3 = uVar1;
  uVar1 = (**(code **)(*param_1 + 0xe0))(param_1,*(undefined4 *)(*param_1 + 0xe4));
  *param_4 = uVar1;
  return;
}


/* IL2CPP: Rotatelab.Networking.StopwatchEvent$$Start
Rotatelab_Networking_StopwatchEvent_o* Rotatelab_Networking_StopwatchEvent__Start (Rotatelab_Networking_StopwatchEvent_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Networking.StopwatchEvent$$Start
   Rotatelab_Networking_StopwatchEvent_o* Rotatelab_Networking_StopwatchEvent__Start
   (Rotatelab_Networking_StopwatchEvent_o* __this, const MethodInfo* method); */

int Rotatelab_Networking_StopwatchEvent__Start_fe8fe4(int param_1)

{
  undefined8 uVar1;
  
  if (*(double *)(param_1 + 0x10) < 0.0) {
    uVar1 = UnityEngine_Time__get_realtimeSinceStartupAsDouble_360ca34(0);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
  }
  return param_1;
}


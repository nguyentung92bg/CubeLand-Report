/* IL2CPP: Rotatelab.Networking.StopwatchEvent$$AddTimestamp
Rotatelab_Networking_StopwatchEvent_o* Rotatelab_Networking_StopwatchEvent__AddTimestamp (Rotatelab_Networking_StopwatchEvent_o* __this, System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Networking.StopwatchEvent$$AddTimestamp
   Rotatelab_Networking_StopwatchEvent_o* Rotatelab_Networking_StopwatchEvent__AddTimestamp
   (Rotatelab_Networking_StopwatchEvent_o* __this, System_String_o* name, const MethodInfo* method);
    */

void Rotatelab_Networking_StopwatchEvent__AddTimestamp_fe9c6c(int param_1,undefined4 param_2)

{
  double dVar1;
  
  dVar1 = (double)UnityEngine_Time__get_realtimeSinceStartupAsDouble_360ca34(0);
  dVar1 = dVar1 - *(double *)(param_1 + 0x10);
  Rotatelab_Networking_StopwatchEvent__AddParameter_fe99c0
            (param_1,param_2,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  return;
}


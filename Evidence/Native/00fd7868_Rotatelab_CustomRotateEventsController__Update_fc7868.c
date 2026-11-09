/* IL2CPP: Rotatelab.CustomRotateEventsController$$Update
void Rotatelab_CustomRotateEventsController__Update (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.CustomRotateEventsController$$Update
   void Rotatelab_CustomRotateEventsController__Update (Rotatelab_CustomRotateEventsController_o*
   __this, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__Update_fc7868(int param_1)

{
  float fVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    fVar2 = *(float *)(param_1 + 0x10);
    fVar1 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
    *(float *)(param_1 + 0x10) = fVar2 + fVar1;
  }
  fVar2 = *(float *)(param_1 + 0x14);
  fVar1 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
  *(float *)(param_1 + 0x14) = fVar2 + fVar1;
  return;
}


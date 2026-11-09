/* IL2CPP: Rotatelab.CloudRush.CloudRushRegistrationController$$EaseProgress
float Rotatelab_CloudRush_CloudRushRegistrationController__EaseProgress (Rotatelab_CloudRush_CloudRushRegistrationController_o* __this, float completionProgress, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushRegistrationController$$EaseProgress
   float Rotatelab_CloudRush_CloudRushRegistrationController__EaseProgress
   (Rotatelab_CloudRush_CloudRushRegistrationController_o* __this, float completionProgress, const
   MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushRegistrationController__EaseProgress_10e63d4
               (int param_1,float param_2)

{
  bool bVar1;
  
  bVar1 = param_2 < 0.0;
  if (1.0 < param_2) {
    param_2 = 1.0;
  }
  if (bVar1) {
    param_2 = _UNK_010f640c;
  }
                    /* WARNING: Could not recover jumptable at 0x039fc4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_powf_03b7bb3c)(param_2,1.0 / *(float *)(param_1 + 0x28));
  return;
}


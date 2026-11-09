/* IL2CPP: Rotatelab.CloudRush.CloudRushRegistrationController.<WaitForProgressCoroutine>d__18$$MoveNext
bool Rotatelab_CloudRush_CloudRushRegistrationController__WaitForProgressCoroutine_d__18__MoveNext (Rotatelab_CloudRush_CloudRushRegistrationController__WaitForProgressCoroutine_d__18_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.CloudRush.CloudRushRegistrationController.<WaitForProgressCoroutine>d__18$$MoveNext
   bool 
   Rotatelab_CloudRush_CloudRushRegistrationController__WaitForProgressCoroutine_d__18__MoveNext
   (Rotatelab_CloudRush_CloudRushRegistrationController__WaitForProgressCoroutine_d__18_o* __this,
   const MethodInfo* method); */

bool Rotatelab_CloudRush_CloudRushRegistrationController__WaitForProgressCoroutine_d__18__MoveNext_10e709c
               (int param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      return false;
    }
    iVar2 = *(int *)(param_1 + 0x14);
    fVar4 = *(float *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar3 = *(float *)(param_1 + 0x18);
    fVar5 = *(float *)(iVar2 + 0x24);
    bVar1 = fVar3 < 0.0;
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
    if (bVar1) {
      fVar3 = _UNK_010f7178;
    }
    fVar3 = (float)FUN_01f4f1c0(fVar3,1.0 / *(float *)(iVar2 + 0x28));
    *(float *)(param_1 + 0x1c) = fVar4 + fVar5 * fVar3;
  }
  fVar4 = (float)UnityEngine_Time__get_time_3610900(0);
  bVar1 = fVar4 < *(float *)(param_1 + 0x1c);
  if (bVar1) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return bVar1;
}


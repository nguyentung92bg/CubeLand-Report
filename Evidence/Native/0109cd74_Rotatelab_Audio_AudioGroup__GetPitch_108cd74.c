/* IL2CPP: Rotatelab.Audio.AudioGroup$$GetPitch
float Rotatelab_Audio_AudioGroup__GetPitch (Rotatelab_Audio_AudioGroup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Audio.AudioGroup$$GetPitch
   float Rotatelab_Audio_AudioGroup__GetPitch (Rotatelab_Audio_AudioGroup_o* __this, const
   MethodInfo* method); */

float Rotatelab_Audio_AudioGroup__GetPitch_108cd74(int param_1)

{
  bool bVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  int iVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;
  
  if (*(int *)(param_1 + 0x24) < 2) {
    uVar3 = *(undefined4 *)(param_1 + 0x1c);
    uVar4 = *(undefined4 *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)(_UNK_03608b08 + 0x3608ad8);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_03608b0c + 0x3608ae8);
      *(code **)(_UNK_03608b10 + 0x3608af8) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x03608b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(*UNRECOVERED_JUMPTABLE)(uVar3,uVar4);
    return fVar2;
  }
  iVar5 = 0;
  fVar2 = (float)UnityEngine_Time__get_time_3610900(0);
  uVar6 = in_fpscr & 0xfffffff |
          (uint)(fVar2 < *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x28)) << 0x1f;
  if (SUB41(uVar6 >> 0x1f,0)) {
    iVar5 = *(int *)(param_1 + 0x34) + 1;
  }
  *(int *)(param_1 + 0x34) = iVar5;
  uVar3 = UnityEngine_Time__get_time_3610900(0);
  fVar2 = _UNK_0109ce24;
  fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x24),(byte)(uVar6 >> 0x16) & 3);
  fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x34),(byte)(uVar6 >> 0x16) & 3);
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  fVar8 = fVar8 / fVar7;
  bVar1 = fVar8 < 0.0;
  if (1.0 < fVar8) {
    fVar8 = 1.0;
  }
  if (bVar1) {
    fVar8 = fVar2;
  }
  return *(float *)(param_1 + 0x1c) +
         (*(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x1c)) * fVar8;
}


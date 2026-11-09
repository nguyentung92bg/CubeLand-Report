/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer.<>c__DisplayClass20_0$$<ExtractCenterPlanksTo>b__0
int32_t Rotatelab_Scripts_ColorBoxPlankLayer___c__DisplayClass20_0___ExtractCenterPlanksTo_b__0 (Rotatelab_Scripts_ColorBoxPlankLayer___c__DisplayClass20_0_o* __this, UnityEngine_Transform_o* a, UnityEngine_Transform_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer.<>c__DisplayClass20_0$$<ExtractCenterPlanksTo>b__0
   int32_t Rotatelab_Scripts_ColorBoxPlankLayer___c__DisplayClass20_0___ExtractCenterPlanksTo_b__0
   (Rotatelab_Scripts_ColorBoxPlankLayer___c__DisplayClass20_0_o* __this, UnityEngine_Transform_o*
   a, UnityEngine_Transform_o* b, const MethodInfo* method); */

void Rotatelab_Scripts_ColorBoxPlankLayer___c__DisplayClass20_0___ExtractCenterPlanksTo_b__0_1000a08
               (int param_1,int param_2,int param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  float fStack_20;
  float fStack_1c;
  
  fStack_1c = 0.0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localPosition_3613b6c(&uStack_28,param_2,0);
  uVar2 = FloatVectorSub(uStack_28,*(undefined8 *)(param_1 + 8),2,0x20);
  fVar1 = fStack_20 - *(float *)(param_1 + 0x10);
  uVar2 = FloatVectorMult(uVar2,uVar2,2,0x20);
  fStack_1c = (float)uVar2 + (float)((ulonglong)uVar2 >> 0x20) + fVar1 * fVar1;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localPosition_3613b6c(&uStack_28,param_3,0);
  uVar2 = FloatVectorSub(uStack_28,*(undefined8 *)(param_1 + 8),2,0x20);
  fStack_20 = fStack_20 - *(float *)(param_1 + 0x10);
  uVar2 = FloatVectorMult(uVar2,uVar2,2,0x20);
  System_Single__CompareTo_2b84eb4
            (&fStack_1c,(float)uVar2 + (float)((ulonglong)uVar2 >> 0x20) + fStack_20 * fStack_20,0);
  return;
}


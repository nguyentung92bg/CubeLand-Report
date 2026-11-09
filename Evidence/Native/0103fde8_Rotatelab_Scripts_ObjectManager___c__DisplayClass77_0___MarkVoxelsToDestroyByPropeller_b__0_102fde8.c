/* IL2CPP: Rotatelab.Scripts.ObjectManager.<>c__DisplayClass77_0$$<MarkVoxelsToDestroyByPropeller>b__0
int32_t Rotatelab_Scripts_ObjectManager___c__DisplayClass77_0___MarkVoxelsToDestroyByPropeller_b__0 (Rotatelab_Scripts_ObjectManager___c__DisplayClass77_0_o* __this, Rotatelab_Scripts_VoxelController_o* e1, Rotatelab_Scripts_VoxelController_o* e2, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Rotatelab.Scripts.ObjectManager.<>c__DisplayClass77_0$$<MarkVoxelsToDestroyByPropeller>b__0
   int32_t
   Rotatelab_Scripts_ObjectManager___c__DisplayClass77_0___MarkVoxelsToDestroyByPropeller_b__0
   (Rotatelab_Scripts_ObjectManager___c__DisplayClass77_0_o* __this,
   Rotatelab_Scripts_VoxelController_o* e1, Rotatelab_Scripts_VoxelController_o* e2, const
   MethodInfo* method); */

void Rotatelab_Scripts_ObjectManager___c__DisplayClass77_0___MarkVoxelsToDestroyByPropeller_b__0_102fde8
               (int param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  float fStack_20;
  float fStack_1c;
  
  fStack_1c = 0.0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_2,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_28,iVar1,0);
  uVar3 = FloatVectorSub(uStack_28,*(undefined8 *)(param_1 + 8),2,0x20);
  fVar2 = fStack_20 - *(float *)(param_1 + 0x10);
  uVar3 = FloatVectorMult(uVar3,uVar3,2,0x20);
  fStack_1c = (float)uVar3 + (float)((ulonglong)uVar3 >> 0x20) + fVar2 * fVar2;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_3,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_28,iVar1,0);
  uVar3 = FloatVectorSub(uStack_28,*(undefined8 *)(param_1 + 8),2,0x20);
  fStack_20 = fStack_20 - *(float *)(param_1 + 0x10);
  uVar3 = FloatVectorMult(uVar3,uVar3,2,0x20);
  System_Single__CompareTo_2b84eb4
            (&fStack_1c,(float)uVar3 + (float)((ulonglong)uVar3 >> 0x20) + fStack_20 * fStack_20,0);
  return;
}


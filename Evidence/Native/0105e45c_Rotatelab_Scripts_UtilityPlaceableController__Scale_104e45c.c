/* IL2CPP: Rotatelab.Scripts.UtilityPlaceableController$$Scale
void Rotatelab_Scripts_UtilityPlaceableController__Scale (Rotatelab_Scripts_UtilityPlaceableController_o* __this, UnityEngine_Vector3_o targetScale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.UtilityPlaceableController$$Scale
   void Rotatelab_Scripts_UtilityPlaceableController__Scale
   (Rotatelab_Scripts_UtilityPlaceableController_o* __this, UnityEngine_Vector3_o targetScale, const
   MethodInfo* method); */

void Rotatelab_Scripts_UtilityPlaceableController__Scale_104e45c
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar1 = (char *)(_UNK_0105e54c + 0x105e47c);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105e550 + 0x105e494));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0105e554 + 0x105e4a8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694((undefined8 *)(param_1 + 0x58),0);
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_38,9,0);
  PrimeTween_Tween__Scale_2ce6560
            (&uStack_38,uVar2,param_2,param_3,param_4,0x3e800000,uStack_38,uStack_34,uStack_30,
             uStack_2c,uStack_28,1,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0x58) = CONCAT44(uStack_34,uStack_38);
  *(ulonglong *)(param_1 + 0x60) = CONCAT44(uStack_2c,uStack_30);
  thunk_FUN_00ec5080(param_1 + 0x60,0);
  return;
}


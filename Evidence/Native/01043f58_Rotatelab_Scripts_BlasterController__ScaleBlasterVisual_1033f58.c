/* IL2CPP: Rotatelab.Scripts.BlasterController$$ScaleBlasterVisual
PrimeTween_Tween_o Rotatelab_Scripts_BlasterController__ScaleBlasterVisual (Rotatelab_Scripts_BlasterController_o* __this, float scale, float duration, int8_t ease, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$ScaleBlasterVisual
   PrimeTween_Tween_o Rotatelab_Scripts_BlasterController__ScaleBlasterVisual
   (Rotatelab_Scripts_BlasterController_o* __this, float scale, float duration, int8_t ease, const
   MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__ScaleBlasterVisual_1033f58
               (undefined8 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01044034 + 0x1043f80);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01044038 + 0x1043f94));
    *pcVar5 = '\x01';
  }
  uVar6 = *(undefined4 *)(param_2 + 0x40);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_38,param_5,0);
  uVar4 = uStack_2c;
  uVar3 = uStack_30;
  uVar2 = uStack_34;
  uVar1 = uStack_38;
  if (*(int *)(**(int **)(_UNK_0104403c + 0x1043fc8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684
            (&uStack_38,uVar6,param_3,param_4,uVar1,uVar2,uVar3,uVar4,uStack_28,1,0,0,0,0,0);
  *param_1 = CONCAT44(uStack_34,uStack_38);
  param_1[1] = CONCAT44(uStack_2c,uStack_30);
  return;
}


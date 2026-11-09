/* IL2CPP: Rotatelab.SeasonPass.SeasonPassBonusBank$$FillBy
PrimeTween_Tween_o Rotatelab_SeasonPass_SeasonPassBonusBank__FillBy (Rotatelab_SeasonPass_SeasonPassBonusBank_o* __this, float startValue, float amount, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassBonusBank$$FillBy
   PrimeTween_Tween_o Rotatelab_SeasonPass_SeasonPassBonusBank__FillBy
   (Rotatelab_SeasonPass_SeasonPassBonusBank_o* __this, float startValue, float amount, float
   duration, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassBonusBank__FillBy_10a02b8
               (undefined8 *param_1,undefined4 param_2,float param_3,float param_4,
               undefined4 param_5)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pcVar2 = (char *)(_UNK_010b03d4 + 0x10b02dc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b03d8 + 0x10b02f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b03dc + 0x10b0300));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b03e0 + 0x10b030c));
    *pcVar2 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010b03e4 + 0x10b032c));
  System_Action_float____ctor_1f12930(uVar1,param_2,**(undefined4 **)(_UNK_010b03e8 + 0x10b034c),0);
  if (*(int *)(**(int **)(_UNK_010b03ec + 0x10b0360) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Custom_2ce885c
            (&uStack_40,param_3,param_3 + param_4,param_5,uVar1,0,0,0,0,0,1,0,0,0,0,0);
  *param_1 = uStack_40;
  param_1[1] = uStack_38;
  return;
}


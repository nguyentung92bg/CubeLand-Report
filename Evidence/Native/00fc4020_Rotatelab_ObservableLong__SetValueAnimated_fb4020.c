/* IL2CPP: Rotatelab.ObservableLong$$SetValueAnimated
PrimeTween_Tween_o Rotatelab_ObservableLong__SetValueAnimated (Rotatelab_ObservableLong_o* __this, int64_t value, float duration, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ObservableLong$$SetValueAnimated
   PrimeTween_Tween_o Rotatelab_ObservableLong__SetValueAnimated (Rotatelab_ObservableLong_o*
   __this, int64_t value, float duration, float delay, const MethodInfo* method); */

void Rotatelab_ObservableLong__SetValueAnimated_fb4020
               (undefined8 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 extraout_r1;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pcVar3 = (char *)(_UNK_00fc42f8 + 0xfc4044);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc42fc + 0xfc405c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc4300 + 0xfc4068));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc4304 + 0xfc4074));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc4308 + 0xfc4080));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc430c + 0xfc408c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc4310 + 0xfc4098));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc4314 + 0xfc40a4));
    *pcVar3 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fc4318 + 0xfc40b8));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x10) = param_2;
    thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_2);
    lVar7 = (**(code **)(*param_2 + 0xf0))(param_2,*(undefined4 *)(*param_2 + 0xf4));
    if (lVar7 == CONCAT44(param_4,param_3)) {
      piVar6 = *(int **)(_UNK_00fc431c + 0xfc411c);
      iVar1 = *piVar6;
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar6;
      }
      puVar2 = *(undefined4 **)(iVar1 + 0x5c);
      iVar4 = puVar2[1];
      if (iVar4 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          FUN_00ec3934();
          puVar2 = *(undefined4 **)(*piVar6 + 0x5c);
        }
        uVar5 = *puVar2;
        iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fc4320 + 0xfc4164));
        System_Action_float____ctor_1f12930
                  (iVar4,uVar5,**(undefined4 **)(_UNK_00fc4324 + 0xfc4184),0);
        piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 4);
        *piVar6 = iVar4;
        thunk_FUN_00ec5080(piVar6,iVar4);
      }
      if (*(int *)(**(int **)(_UNK_00fc4328 + 0xfc41ac) + 0x74) == 0) {
        FUN_00ec3934();
      }
    }
    else {
      uVar8 = (**(code **)(*param_2 + 0xf0))(param_2,*(undefined4 *)(*param_2 + 0xf4));
      *(undefined8 *)(iVar1 + 8) = uVar8;
      (**(code **)(*param_2 + 0xf8))
                (param_2,(int)((ulonglong)uVar8 >> 0x20),param_3,param_4,
                 *(undefined4 *)(*param_2 + 0xfc));
      Rotatelab_ObservableValue_long___ForceInvokeOnValueChanged_185d890
                (param_2,extraout_r1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),
                 **(undefined4 **)(_UNK_00fc432c + 0xfc4240));
      iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fc4330 + 0xfc4258));
      System_Action_float____ctor_1f12930(iVar4,iVar1,**(undefined4 **)(_UNK_00fc4334 + 0xfc4278),0)
      ;
      if (*(int *)(**(int **)(_UNK_00fc4338 + 0xfc428c) + 0x74) == 0) {
        FUN_00ec3934();
      }
    }
    PrimeTween_Tween__Custom_2ce885c
              (&uStack_40,0,0x3f800000,param_5,iVar4,0,0,0,0,0,1,0,param_6,0,0,0);
    *param_1 = uStack_40;
    param_1[1] = uStack_38;
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


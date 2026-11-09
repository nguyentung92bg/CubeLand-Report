/* IL2CPP: Rotatelab.Scripts.ColorBoxColorDataSO$$.ctor
void Rotatelab_Scripts_ColorBoxColorDataSO___ctor (Rotatelab_Scripts_ColorBoxColorDataSO_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ColorBoxColorDataSO$$.ctor
   void Rotatelab_Scripts_ColorBoxColorDataSO___ctor (Rotatelab_Scripts_ColorBoxColorDataSO_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_ColorBoxColorDataSO___ctor_ff5128
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar1;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar1 = (char *)(_UNK_01005170 + 0x100513c);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01005174 + 0x1005150));
    *pcVar1 = '\x01';
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  pcVar1 = (char *)(_UNK_03615540 + 0x36154c4);
  if (*pcVar1 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03615544 + 0x36154d8),0,param_3,param_4,unaff_r4,
                       unaff_r5,unaff_r11,unaff_lr);
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_03615548 + 0x36154ec) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  System_Object___ctor_2bb93bc(param_1,0);
  UNRECOVERED_JUMPTABLE = *(code **)(_UNK_0361554c + 0x3615514);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_03615550 + 0x3615524);
    *(code **)(_UNK_03615554 + 0x3615534) = UNRECOVERED_JUMPTABLE;
  }
                    /* WARNING: Could not recover jumptable at 0x0361553c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}


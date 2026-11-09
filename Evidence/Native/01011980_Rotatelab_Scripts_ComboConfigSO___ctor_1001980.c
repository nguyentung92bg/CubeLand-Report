/* IL2CPP: Rotatelab.Scripts.ComboConfigSO$$.ctor
void Rotatelab_Scripts_ComboConfigSO___ctor (Rotatelab_Scripts_ComboConfigSO_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ComboConfigSO$$.ctor
   void Rotatelab_Scripts_ComboConfigSO___ctor (Rotatelab_Scripts_ComboConfigSO_o* __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_ComboConfigSO___ctor_1001980
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01011a18 + 0x1011998);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01011a1c + 0x10119ac));
    *pcVar4 = '\x01';
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  uVar3 = _UNK_01011a10;
  uVar2 = _UNK_01011a08;
  uVar1 = _UNK_01011a00;
  *(undefined8 *)(param_1 + 0x18) = _UNK_010119f8;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 3;
  *(undefined4 *)(param_1 + 0x38) = 0x40000000;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  pcVar4 = (char *)(_UNK_03615540 + 0x36154c4);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03615544 + 0x36154d8),0,param_3,param_4,unaff_r4,
                       unaff_r5);
    *pcVar4 = '\x01';
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


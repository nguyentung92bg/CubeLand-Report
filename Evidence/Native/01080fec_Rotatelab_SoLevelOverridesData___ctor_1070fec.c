/* IL2CPP: Rotatelab.SoLevelOverridesData$$.ctor
void Rotatelab_SoLevelOverridesData___ctor (Rotatelab_SoLevelOverridesData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SoLevelOverridesData$$.ctor
   void Rotatelab_SoLevelOverridesData___ctor (Rotatelab_SoLevelOverridesData_o* __this, const
   MethodInfo* method); */

void Rotatelab_SoLevelOverridesData___ctor_1070fec(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01081074 + 0x1081000);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01081078 + 0x1081014));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108107c + 0x1081020));
    *pcVar2 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01081080 + 0x1081034));
  System_Collections_Generic_Dictionary_int__object____ctor_1fcf074
            (uVar1,0x32,**(undefined4 **)(_UNK_01081084 + 0x108104c));
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x10),uVar1);
  pcVar2 = (char *)(_UNK_03615540 + 0x36154c4);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03615544 + 0x36154d8),0);
    *pcVar2 = '\x01';
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


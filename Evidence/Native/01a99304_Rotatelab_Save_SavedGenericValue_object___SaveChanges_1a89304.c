/* IL2CPP: Rotatelab.Save.SavedGenericValue<object>$$SaveChanges
void Rotatelab_Save_SavedGenericValue_object___SaveChanges (Rotatelab_Save_SavedGenericValue_T__o* __this, const MethodInfo_1A89304* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedGenericValue<object>$$SaveChanges
   void Rotatelab_Save_SavedGenericValue_object___SaveChanges
   (Rotatelab_Save_SavedGenericValue_T__o* __this, const MethodInfo_1A89304* method); */

void Rotatelab_Save_SavedGenericValue_object___SaveChanges_1a89304(int *param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = Rotatelab_Save_SavedValue_object___get_Value_1a8bb8c(param_1);
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*param_1 + 0xe8))(param_1,uVar1,*(undefined4 *)(*param_1 + 0xec));
  if (*(code **)(_UNK_03607988 + 0x360795c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03607960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_UNK_03607988 + 0x360795c))();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_0360798c + 0x3607974);
  *(code **)(_UNK_03607990 + 0x3607980) = UNRECOVERED_JUMPTABLE;
                    /* WARNING: Could not recover jumptable at 0x03607984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


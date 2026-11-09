/* IL2CPP: Rotatelab.Save.SaveManager$$DeleteKey
void Rotatelab_Save_SaveManager__DeleteKey (System_String_o* key, bool saveChanges, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SaveManager$$DeleteKey
   void Rotatelab_Save_SaveManager__DeleteKey (System_String_o* key, bool saveChanges, const
   MethodInfo* method); */

void Rotatelab_Save_SaveManager__DeleteKey_1082f50(undefined4 param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UnityEngine_PlayerPrefs__DeleteKey_35f76ec(param_1,0);
  if (param_2 == 0) {
    return;
  }
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


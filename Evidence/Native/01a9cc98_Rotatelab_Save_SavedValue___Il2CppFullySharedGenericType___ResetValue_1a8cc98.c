/* IL2CPP: Rotatelab.Save.SavedValue<__Il2CppFullySharedGenericType>$$ResetValue
void Rotatelab_Save_SavedValue___Il2CppFullySharedGenericType___ResetValue (Rotatelab_Save_SavedValue_T__o* __this, const MethodInfo_1A8CC98* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedValue<__Il2CppFullySharedGenericType>$$ResetValue
   void Rotatelab_Save_SavedValue___Il2CppFullySharedGenericType___ResetValue
   (Rotatelab_Save_SavedValue_T__o* __this, const MethodInfo_1A8CC98* method); */

void Rotatelab_Save_SavedValue___Il2CppFullySharedGenericType___ResetValue_1a8cc98
               (undefined4 param_1,int param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = (undefined4 *)
           thunk_FUN_00f1b490(param_1,*(undefined4 *)
                                       (**(int **)(*(int *)(param_2 + 0x10) + 0x60) + 0x40));
  UnityEngine_PlayerPrefs__DeleteKey_35f76ec(*puVar4,0);
  iVar5 = *(int *)(**(int **)(*(int *)(param_2 + 0x10) + 0x60) + 0x40) + 100;
  func_0x00ec37e0(iVar5,1);
  puVar2 = (undefined1 *)thunk_FUN_00f1b490(param_1,iVar5);
  *puVar2 = 0;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar3 = (uint *)(_UNK_00f30584 + ((uint)puVar2 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = *puVar3 | 1 << (((uint)puVar2 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}


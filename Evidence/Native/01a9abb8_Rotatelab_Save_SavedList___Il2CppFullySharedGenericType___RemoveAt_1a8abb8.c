/* IL2CPP: Rotatelab.Save.SavedList<__Il2CppFullySharedGenericType>$$RemoveAt
void Rotatelab_Save_SavedList___Il2CppFullySharedGenericType___RemoveAt (Rotatelab_Save_SavedList_T__o* __this, int32_t index, bool saveChanges, const MethodInfo_1A8ABB8* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedList<__Il2CppFullySharedGenericType>$$RemoveAt
   void Rotatelab_Save_SavedList___Il2CppFullySharedGenericType___RemoveAt
   (Rotatelab_Save_SavedList_T__o* __this, int32_t index, bool saveChanges, const
   MethodInfo_1A8ABB8* method); */

void Rotatelab_Save_SavedList___Il2CppFullySharedGenericType___RemoveAt_1a8abb8
               (int *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iStack_1c;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar1 = (undefined4 *)**(undefined4 **)(*(int *)(param_4 + 0x10) + 0x60);
  (*(code *)puVar1[2])(*puVar1,puVar1,param_1,0,&iStack_1c);
  if (iStack_1c == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_4 + 0x10) + 0x60) + 0x30))(iStack_1c,param_2);
  if (param_3 != 0) {
    if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*param_1 + 0xf0))(param_1,*(undefined4 *)(*param_1 + 0xf4));
  }
  return;
}


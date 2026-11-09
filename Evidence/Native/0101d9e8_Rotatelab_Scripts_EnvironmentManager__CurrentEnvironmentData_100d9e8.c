/* IL2CPP: Rotatelab.Scripts.EnvironmentManager$$CurrentEnvironmentData
Rotatelab_Scripts_EnvironmentData_o Rotatelab_Scripts_EnvironmentManager__CurrentEnvironmentData (Rotatelab_Scripts_EnvironmentManager_o* __this, int32_t levelDifficultyIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.EnvironmentManager$$CurrentEnvironmentData
   Rotatelab_Scripts_EnvironmentData_o Rotatelab_Scripts_EnvironmentManager__CurrentEnvironmentData
   (Rotatelab_Scripts_EnvironmentManager_o* __this, int32_t levelDifficultyIndex, const MethodInfo*
   method); */

void Rotatelab_Scripts_EnvironmentManager__CurrentEnvironmentData_100d9e8
               (undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined1 auStack_70 [88];
  
  pcVar2 = (char *)(_UNK_0101da7c + 0x101da08);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101da80 + 0x101da1c));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(param_2 + 0x10) + 0xc);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_EnvironmentData___get_Item_25fc7f8
            (auStack_70,iVar1,param_3,**(undefined4 **)(_UNK_0101da84 + 0x101da5c));
  thunk_FUN_00f95db8(param_1,auStack_70,0x54);
  return;
}


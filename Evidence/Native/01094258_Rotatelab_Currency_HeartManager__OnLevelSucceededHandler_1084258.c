/* IL2CPP: Rotatelab.Currency.HeartManager$$OnLevelSucceededHandler
void Rotatelab_Currency_HeartManager__OnLevelSucceededHandler (Rotatelab_Currency_HeartManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Currency.HeartManager$$OnLevelSucceededHandler
   void Rotatelab_Currency_HeartManager__OnLevelSucceededHandler (Rotatelab_Currency_HeartManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_Currency_HeartManager__OnLevelSucceededHandler_1084258(int param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar2 = *(int **)(iVar1 + 0x58);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  lVar3 = (**(code **)(*piVar2 + 0xf0))(piVar2,*(undefined4 *)(*piVar2 + 0xf4));
  (**(code **)(*piVar2 + 0xf8))
            (piVar2,(int)((ulonglong)lVar3 >> 0x20),(int)(lVar3 + 1),
             (int)((ulonglong)(lVar3 + 1) >> 0x20),*(undefined4 *)(*piVar2 + 0xfc));
  return;
}


/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$<Awake>b__28_0
void Rotatelab_Networking_CloudSaveManager___Awake_b__28_0 (Rotatelab_Networking_CloudSaveManager_o* __this, bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$<Awake>b__28_0
   void Rotatelab_Networking_CloudSaveManager___Awake_b__28_0
   (Rotatelab_Networking_CloudSaveManager_o* __this, bool value, const MethodInfo* method); */

void Rotatelab_Networking_CloudSaveManager___Awake_b__28_0_1146c38(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar3 = *(int **)(*(int *)(param_1 + 0x14) + 0x58);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = 5;
  if (param_2 != 0) {
    uVar2 = 10;
  }
  pcVar1 = *(code **)(*piVar3 + 0x118);
  (*pcVar1)(piVar3,pcVar1,uVar2,0,*(undefined4 *)(*piVar3 + 0x11c));
  return;
}


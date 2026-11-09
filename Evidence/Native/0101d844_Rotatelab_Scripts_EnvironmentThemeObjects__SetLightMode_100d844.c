/* IL2CPP: Rotatelab.Scripts.EnvironmentThemeObjects$$SetLightMode
void Rotatelab_Scripts_EnvironmentThemeObjects__SetLightMode (Rotatelab_Scripts_EnvironmentThemeObjects_o* __this, bool isLight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.EnvironmentThemeObjects$$SetLightMode
   void Rotatelab_Scripts_EnvironmentThemeObjects__SetLightMode
   (Rotatelab_Scripts_EnvironmentThemeObjects_o* __this, bool isLight, const MethodInfo* method); */

void Rotatelab_Scripts_EnvironmentThemeObjects__SetLightMode_100d844(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = 0;
  while( true ) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar2) {
      iVar1 = *(int *)(param_1 + 0x14);
      uVar2 = 0;
      while( true ) {
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar2) {
          return;
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar3 = *(int *)(iVar1 + 0x10 + uVar2 * 4);
        if (iVar3 == 0) break;
        UnityEngine_GameObject__SetActive_3602038(iVar3,param_2,0);
        uVar2 = uVar2 + 1;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar3 = *(int *)(iVar1 + 0x10 + uVar2 * 4);
    if (iVar3 == 0) break;
    UnityEngine_GameObject__SetActive_3602038(iVar3,param_2 ^ 1,0);
    uVar2 = uVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


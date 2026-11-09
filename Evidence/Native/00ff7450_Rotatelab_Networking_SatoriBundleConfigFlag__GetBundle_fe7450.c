/* IL2CPP: Rotatelab.Networking.SatoriBundleConfigFlag$$GetBundle
ShopBundleSO_o* Rotatelab_Networking_SatoriBundleConfigFlag__GetBundle (Rotatelab_Networking_SatoriBundleConfigFlag_o* __this, ShopBundleSO_o* _template, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.SatoriBundleConfigFlag$$GetBundle
   ShopBundleSO_o* Rotatelab_Networking_SatoriBundleConfigFlag__GetBundle
   (Rotatelab_Networking_SatoriBundleConfigFlag_o* __this, ShopBundleSO_o* _template, const
   MethodInfo* method); */

int Rotatelab_Networking_SatoriBundleConfigFlag__GetBundle_fe7450(int *param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  pcVar2 = (char *)(_UNK_00ff755c + 0xff7468);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7560 + 0xff747c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7564 + 0xff7488));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_00ff7568 + 0xff74a0);
  piVar4 = param_1 + 5;
  iVar5 = *piVar4;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar5 = UnityEngine_Object__op_Equality_36033f4(iVar5,0,0);
  if (iVar5 != 0) {
    if (*(int *)(*piVar3 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar5 = UnityEngine_Object__Instantiate_object__14d4b10
                      (param_2,**(undefined4 **)(_UNK_00ff756c + 0xff74ec));
    *piVar4 = iVar5;
    thunk_FUN_00ec5080(piVar4,iVar5);
    iVar5 = *piVar4;
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = UnityEngine_Object__get_name_36081bc(param_2,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Object__set_name_360832c(iVar5,uVar1,0);
    (**(code **)(*param_1 + 0xf8))(param_1,*(undefined4 *)(*param_1 + 0xfc));
  }
  return *piVar4;
}


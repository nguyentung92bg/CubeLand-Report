/* IL2CPP: Rotatelab.ContactUs$$Show
void Rotatelab_ContactUs__Show (Rotatelab_ContactUs_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ContactUs$$Show
   void Rotatelab_ContactUs__Show (Rotatelab_ContactUs_o* __this, const MethodInfo* method); */

void Rotatelab_ContactUs__Show_fb8950(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_00fc8b0c + 0xfc8968);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc8b10 + 0xfc897c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc8b14 + 0xfc8988));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc8b18 + 0xfc8994));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(param_1 + 0x24);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fc8b1c + 0xfc89a8));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = System_String__Concat_29fee38
                    (**(undefined4 **)(_UNK_00fc8b20 + 0xfc89d0),*(undefined4 *)(iVar1 + 0x14),0);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar5 + 0x2b0))(piVar5,uVar2,*(undefined4 *)(*piVar5 + 0x2b4));
  iVar1 = *(int *)(param_1 + 0x30);
  pcVar4 = (char *)(_UNK_00fc8b24 + 0xfc8a10);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc8b28 + 0xfc8a24));
    *pcVar4 = '\x01';
  }
  puVar3 = *(undefined4 **)(**(int **)(_UNK_00fc8b2c + 0xfc8a3c) + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar1,*puVar3,puVar3[1],puVar3[2],0);
  if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Behaviour__set_enabled_35fd7dc(*(int *)(param_1 + 0x34),0,0);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  if (*(int *)(**(int **)(_UNK_00fc8b30 + 0xfc8a98) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__SetVisibility_fc2a78(uVar2,1,0,0);
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x2c),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,0,0);
  *(undefined1 *)(param_1 + 0x45) = 0;
  return;
}


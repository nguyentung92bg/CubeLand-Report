/* IL2CPP: Rotatelab.IAP.PurchasesListener$$OnInitializeFailed
void Rotatelab_IAP_PurchasesListener__OnInitializeFailed (Rotatelab_IAP_PurchasesListener_o* __this, int32_t error, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010a70ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$OnInitializeFailed
   void Rotatelab_IAP_PurchasesListener__OnInitializeFailed (Rotatelab_IAP_PurchasesListener_o*
   __this, int32_t error, const MethodInfo* method); */

void Rotatelab_IAP_PurchasesListener__OnInitializeFailed_1097000
               (undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_010a711c + 0x10a7024);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a7120 + 0x10a7038));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a7124 + 0x10a7044));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a7128 + 0x10a7050));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a712c + 0x10a705c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a7130 + 0x10a7068));
    *pcVar2 = '\x01';
  }
  uStack_1c = **(undefined4 **)(_UNK_010a7134 + 0x10a7080);
  uStack_18 = 0xffffffff;
  uStack_14 = param_2;
  uVar1 = System_Enum__ToString_2bab8c0(&uStack_1c,0);
  uVar1 = System_String__Concat_2a0b574
                    (**(undefined4 **)(_UNK_010a7138 + 0x10a70a8),uVar1,
                     **(undefined4 **)(_UNK_010a7140 + 0x10a70d8),0);
  if (*(int *)(**(int **)(_UNK_010a7144 + 0x10a70f8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Debug__LogError_35b238c(uVar1,0);
  return;
}


/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryProgress$$get_Data
Rotatelab_Networking_CloudSaveData_o* Rotatelab_DailyDelivery_DailyDeliveryProgress__get_Data (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryProgress$$get_Data
   Rotatelab_Networking_CloudSaveData_o* Rotatelab_DailyDelivery_DailyDeliveryProgress__get_Data
   (const MethodInfo* method); */

undefined4 Rotatelab_DailyDelivery_DailyDeliveryProgress__get_Data_10d94c8(void)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01150bd8 + 0x1150b94);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01150bdc + 0x1150ba8));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01150be0 + 0x1150bbc));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(undefined4 *)(iVar1 + 0x14);
}


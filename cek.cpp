FILE *fp = fopen("trace.log","a+");
Time now = Scheduler::instance().clock ();
fprintf(fp, "%.5f|%d|\n",now, myaddr_);
fclose(fp);
